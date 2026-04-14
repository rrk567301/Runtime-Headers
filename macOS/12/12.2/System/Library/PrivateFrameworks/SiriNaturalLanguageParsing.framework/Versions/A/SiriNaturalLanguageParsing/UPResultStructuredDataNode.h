@class NSString, NSArray;

@interface UPResultStructuredDataNode : NSObject

@property (readonly, copy) NSString *type;
@property (readonly, copy) NSString *value;
@property (readonly, copy) NSArray *children;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)initWithType:(id)a0 andValue:(id)a1 andChildren:(id)a2;

@end
