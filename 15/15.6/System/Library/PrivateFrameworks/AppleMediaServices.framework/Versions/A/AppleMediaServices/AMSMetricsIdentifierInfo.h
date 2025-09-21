@class NSString, NSNumber, NSDate;

@interface AMSMetricsIdentifierInfo : NSObject

@property char crossDeviceSync;
@property (retain) NSString *idKey;
@property (retain) NSString *name;
@property (retain) NSString *storeUUID;
@property (retain) NSString *value;
@property (retain) NSDate *expires;
@property char deleted;
@property (retain) NSDate *lastSync;
@property (retain) NSDate *modified;
@property (retain) NSDate *serverProvidedAt;
@property (retain, nonatomic) NSNumber *changeCounter;
@property (retain, nonatomic) NSNumber *changeCause;
@property (copy, nonatomic) NSString *previousValue;

+ (char)bothDatesAreNilOr:(id)a0 equals:(id)a1;
+ (char)bothStringsAreNilOr:(id)a0 equals:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (char)isEqualIgnoringLastSync:(id)a0;
- (void)populateDictionary:(id)a0 shouldEmitDiagnosticFields:(char)a1 shouldEmitPreviousUserId:(char)a2;
- (id)specializedFieldNameForFieldName:(id)a0;

@end
