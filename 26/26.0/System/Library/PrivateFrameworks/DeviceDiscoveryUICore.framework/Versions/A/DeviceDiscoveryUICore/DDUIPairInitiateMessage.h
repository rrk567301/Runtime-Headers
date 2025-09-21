@class DDUIApplicationInfo;

@interface DDUIPairInitiateMessage : NSObject

@property (readonly, nonatomic) DDUIApplicationInfo *applicationInfo;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithApplicationInfo:(id)a0;

@end
