@class NSString;

@interface IMAPFetchDataItem : NSObject

@property (copy, nonatomic) NSString *commandString;

+ (id)bodyStructureDataItem;
+ (id)appleRemoteLinksDataItem;
+ (id)sizeDataItem;
+ (id)flagsDataItem;
+ (id)UIDDataItem;
+ (id)internalDateDataItem;
+ (id)modificationSequenceDataItem;
+ (id)gmailLabelsDataItem;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
