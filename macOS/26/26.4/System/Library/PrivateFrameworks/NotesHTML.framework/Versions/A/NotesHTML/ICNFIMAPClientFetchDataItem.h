@class NSString;

@interface ICNFIMAPClientFetchDataItem : NSObject

@property (copy, nonatomic) NSString *commandString;

+ (id)UIDDataItem;
+ (id)bodyStructureDataItem;
+ (id)flagsDataItem;
+ (id)gmailLabelsDataItem;
+ (id)internalDateDataItem;
+ (id)modificationSequenceDataItem;
+ (id)sizeDataItem;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
