@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel

@property (retain, nonatomic) id placeholderUUID;
@property (readonly, nonatomic) NSDate *placeholderDate;

+ (id)sharedInstance;

- (id)fileName;
- (BOOL)isEqual:(id)a0;
- (id)fileCreationDate;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)uuid;
- (long long)badgeType;
- (id)initWithPlaceholderDate:(id)a0;
- (BOOL)isEqualToImportPlaceholderViewModel:(id)a0;

@end
