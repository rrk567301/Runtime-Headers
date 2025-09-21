@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel

@property (retain, nonatomic) id placeholderUUID;
@property (readonly, nonatomic) NSDate *placeholderDate;

+ (id)sharedInstance;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)uuid;
- (id)fileCreationDate;
- (id)fileName;
- (long long)badgeType;
- (id)initWithPlaceholderDate:(id)a0;
- (char)isEqualToImportPlaceholderViewModel:(id)a0;

@end
