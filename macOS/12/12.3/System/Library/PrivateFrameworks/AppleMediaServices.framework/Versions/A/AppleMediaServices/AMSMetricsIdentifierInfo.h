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

- (void).cxx_destruct;
- (id)syncStateFieldName;
- (void)populateDictionary:(id)a0;

@end
