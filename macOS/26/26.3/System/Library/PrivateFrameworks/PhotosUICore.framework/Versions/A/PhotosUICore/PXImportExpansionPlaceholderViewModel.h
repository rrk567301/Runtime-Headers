@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel

@property (retain, nonatomic) id placeholderUUID;
@property (readonly, nonatomic) NSDate *placeholderDate;

+ (id)sharedInstance;

- (id)description;
- (id)uuid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)fileCreationDate;
- (id)fileName;
- (long long)badgeType;
- (id)initWithPlaceholderDate:(id)a0;
- (BOOL)isEqualToImportPlaceholderViewModel:(id)a0;

@end
