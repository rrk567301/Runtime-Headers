@class NSString, NSArray;

@interface FCTagChannelPickerConfiguration : NSObject

@property (readonly, nonatomic) NSString *tagID;
@property (readonly, nonatomic) NSString *pickerID;
@property (nonatomic) BOOL shouldFilterFollows;
@property (nonatomic) BOOL shouldAllowSearch;
@property (nonatomic) BOOL shouldShowManagement;
@property (nonatomic) BOOL showInContextMenu;
@property (readonly, nonatomic) NSString *contextMenuTitle;
@property (readonly, nonatomic) NSString *contextMenuSystemImageName;
@property (readonly, nonatomic) NSArray *suggestionsContextTagIDs;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
