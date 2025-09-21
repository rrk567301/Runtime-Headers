@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel

@property (retain, nonatomic) id placeholderUUID;
@property (readonly, nonatomic) NSDate *placeholderDate;

+ (id)sharedInstance;

- (id)fileName;
- (id)description;
- (id)uuid;
- (id)fileCreationDate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)badgeType;
- (id)initWithPlaceholderDate:(id)a0;
- (BOOL)isEqualToImportPlaceholderViewModel:(id)a0;

@end
