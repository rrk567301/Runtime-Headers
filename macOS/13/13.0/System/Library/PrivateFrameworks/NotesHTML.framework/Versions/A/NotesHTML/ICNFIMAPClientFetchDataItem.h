@class NSString;

@interface ICNFIMAPClientFetchDataItem : NSObject

@property (copy, nonatomic) NSString *commandString;

+ (id)flagsDataItem;
+ (id)UIDDataItem;
+ (id)bodyStructureDataItem;
+ (id)internalDateDataItem;
+ (id)sizeDataItem;
+ (id)modificationSequenceDataItem;
+ (id)gmailLabelsDataItem;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
