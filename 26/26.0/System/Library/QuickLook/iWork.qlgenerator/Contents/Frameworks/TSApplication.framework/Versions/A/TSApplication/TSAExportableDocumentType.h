@class NSString;

@interface TSAExportableDocumentType : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *exportProgressTitle;
@property (readonly, nonatomic) NSString *exportProgressMessage;
@property (readonly, nonatomic) NSString *exportMessage;

+ (id)exportableTypeWithType:(id)a0 localizedName:(id)a1 exportProgressMessage:(id)a2;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 localizedName:(id)a1 exportProgressMessage:(id)a2;
- (id)initWithType:(id)a0 localizedName:(id)a1 exportProgressMessage:(id)a2 exportProgressTitle:(id)a3 exportMessage:(id)a4;

@end
