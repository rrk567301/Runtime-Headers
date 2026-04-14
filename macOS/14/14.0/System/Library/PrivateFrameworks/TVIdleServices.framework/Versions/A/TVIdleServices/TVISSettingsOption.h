@class NSString, NSURL;

@interface TVISSettingsOption : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSURL *previewImageURL;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) long long preferredOrder;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 localizedName:(id)a1 localizedDescription:(id)a2 isActive:(BOOL)a3 previewImageURL:(id)a4 disabled:(BOOL)a5 preferredOrder:(long long)a6;

@end
