@class DDUIApplicationInfo;

@interface DDUIPairInitiateMessage : NSObject

@property (readonly, nonatomic) DDUIApplicationInfo *applicationInfo;

- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplicationInfo:(id)a0;

@end
