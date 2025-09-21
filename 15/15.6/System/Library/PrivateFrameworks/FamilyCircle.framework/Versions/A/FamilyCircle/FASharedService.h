@class NSString, NSDictionary, NSArray, NSNumber;

@interface FASharedService : NSObject

@property (retain) NSDictionary *dictionary;
@property (readonly, nonatomic) char isSeparator;
@property (readonly, nonatomic) char isDefault;
@property (readonly, nonatomic) char isEnabled;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *order;
@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) NSString *subLabel;
@property (readonly, nonatomic) NSNumber *purchaserDSID;
@property (readonly, nonatomic) NSString *detailLabel;
@property (readonly, nonatomic) NSString *iconURLString;
@property (readonly, nonatomic) NSString *iconURLStringx2;
@property (readonly, nonatomic) NSString *iconURLStringx3;
@property (readonly, nonatomic) NSString *actionURLString;
@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSArray *pageViews;
@property (readonly, nonatomic) NSArray *memberDetailsViewTypes;
@property (readonly, nonatomic) NSArray *subscriberDSIDs;
@property (readonly, nonatomic) NSString *ruiURL;

+ (id)sortedArray:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (char)isEqualToSharedService:(id)a0;

@end
