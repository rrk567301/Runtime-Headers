@class NSArray, NSString;

@interface RCDebugOverrides : NSObject <RCSerializable>

@property (readonly, nonatomic) char disableAbTesting;
@property (readonly, copy, nonatomic) NSArray *overrideSegmentSetIDs;
@property (readonly, copy, nonatomic) NSArray *additionalSegmentSetIDs;
@property (readonly, nonatomic) char onlyUseFallbackURL;
@property (readonly, nonatomic) unsigned long long configurationSource;
@property (readonly, nonatomic) unsigned long long debugEnvironment;
@property (readonly, nonatomic) char ignoreCache;
@property (readonly, nonatomic) char enableExtraLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDebugOverrides;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDisableAbTesting:(char)a0 overrideSegmentSetIDs:(id)a1 additionalSegmentSetIDs:(id)a2 configurationSource:(unsigned long long)a3 debugEnvironment:(unsigned long long)a4 ignoreCache:(char)a5;
- (id)initWithDisableAbTesting:(char)a0 overrideSegmentSetIDs:(id)a1 additionalSegmentSetIDs:(id)a2 configurationSource:(unsigned long long)a3 debugEnvironment:(unsigned long long)a4 ignoreCache:(char)a5 enableExtraLogs:(char)a6;
- (id)initWithDisableAbTesting:(char)a0 overrideSegmentSetIDs:(id)a1 additionalSegmentSetIDs:(id)a2 onlyUseFallbackURL:(char)a3 debugEnvironment:(unsigned long long)a4;

@end
