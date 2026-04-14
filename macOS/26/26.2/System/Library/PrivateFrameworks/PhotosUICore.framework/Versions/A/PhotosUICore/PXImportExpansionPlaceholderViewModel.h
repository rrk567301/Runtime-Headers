@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel

@property (retain, nonatomic) id placeholderUUID;
@property (readonly, nonatomic) NSDate *placeholderDate;

+ (id)sharedInstance;

- (id)uuid;
- (id)fileCreationDate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)fileName;
- (void).cxx_destruct;
- (id)description;
- (long long)badgeType;
- (id)initWithPlaceholderDate:(id)a0;
- (BOOL)isEqualToImportPlaceholderViewModel:(id)a0;

@end
