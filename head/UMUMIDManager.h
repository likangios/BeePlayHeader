//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UMUMIDManager : NSObject
{
    NSString *_privateUMIDToken;
    id _secSDK;
    id _secListener;
}

+ (id)umidToken;
+ (void)requestUMID;
+ (id)shareInstance;
@property(retain, nonatomic) id secListener; // @synthesize secListener=_secListener;
@property(retain, nonatomic) id secSDK; // @synthesize secSDK=_secSDK;
@property(copy) NSString *privateUMIDToken; // @synthesize privateUMIDToken=_privateUMIDToken;
- (void).cxx_destruct;
- (Class)createChildClassWithSecListenerClassName:(id)arg1;
- (id)createSecSDKInstanceWithClassName:(id)arg1;
- (void)requestUMID;
- (id)init;

@end

