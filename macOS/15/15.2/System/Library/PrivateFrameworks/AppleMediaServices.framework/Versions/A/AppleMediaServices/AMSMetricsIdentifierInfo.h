@class NSString, NSDate;

@interface AMSMetricsIdentifierInfo : NSObject

@property BOOL crossDeviceSync;
@property (retain) NSString *idKey;
@property (retain) NSString *name;
@property (retain) NSString *storeUUID;
@property (retain) NSString *value;
@property (retain) NSDate *expires;
@property BOOL deleted;
@property (retain) NSDate *lastSync;
@property (retain) NSDate *modified;
@property (retain) NSDate *serverProvidedAt;

+ (BOOL)bothDatesAreNilOr:(id)a0 equals:(id)a1;
+ (BOOL)bothStringsAreNilOr:(id)a0 equals:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualIgnoringLastSync:(id)a0;
- (void)populateDictionary:(id)a0;
- (id)syncStateFieldName;

@end
