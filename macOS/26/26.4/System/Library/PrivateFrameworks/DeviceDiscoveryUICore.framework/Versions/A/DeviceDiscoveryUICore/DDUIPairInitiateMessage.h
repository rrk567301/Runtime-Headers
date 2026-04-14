@class DDUIApplicationInfo;

@interface DDUIPairInitiateMessage : NSObject

@property (readonly, nonatomic) DDUIApplicationInfo *applicationInfo;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (id)initWithApplicationInfo:(id)a0;

@end
