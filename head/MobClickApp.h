//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MobClickApp : NSObject
{
    _Bool _crashReportEnabled;
    double _logSendInterval;
    int _reportPolicy;
    _Bool _appCrashedHandlerInstalled;
    unsigned long long _activateMsgTS;
    unsigned long long _scenarioType;
    NSString *_appVersion;
    NSString *_wrapperType;
    NSString *_wrapperVersion;
    NSString *_vcName;
}

+ (id)sessionId;
+ (void)setCrashReportEnabled:(_Bool)arg1;
+ (int)verifyReportPolicy:(int)arg1;
+ (double)minReportInterval;
+ (_Bool)checkScenario:(unsigned long long)arg1;
+ (id)sharedInstance;
@property(copy) NSString *vcName; // @synthesize vcName=_vcName;
@property(copy, nonatomic) NSString *wrapperVersion; // @synthesize wrapperVersion=_wrapperVersion;
@property(copy, nonatomic) NSString *wrapperType; // @synthesize wrapperType=_wrapperType;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned long long scenarioType; // @synthesize scenarioType=_scenarioType;
@property(nonatomic, getter=reportPolicy) int reportPolicy; // @synthesize reportPolicy=_reportPolicy;
@property(nonatomic) unsigned long long activateMsgTS; // @synthesize activateMsgTS=_activateMsgTS;
@property(nonatomic) double logSendInterval; // @synthesize logSendInterval=_logSendInterval;
@property(nonatomic) _Bool appCrashedHandlerInstalled; // @synthesize appCrashedHandlerInstalled=_appCrashedHandlerInstalled;
@property(nonatomic) _Bool crashReportEnabled; // @synthesize crashReportEnabled=_crashReportEnabled;
- (void)setActivateMsgFlag;
- (void)noAppKeyException;

@end

