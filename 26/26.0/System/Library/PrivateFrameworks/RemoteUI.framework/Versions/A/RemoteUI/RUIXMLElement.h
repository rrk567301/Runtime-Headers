@class NSString, NSDictionary, NSArray;

@interface RUIXMLElement : NSObject {
    void /* function */ name;
    void /* function */ attributes;
    void /* function */ stringValue;
    void /* unknown type, empty encoding */ mutableChildren;
}

@property (nonatomic, readonly) NSString *xmlString;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSDictionary *attributtes;
@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic, weak) void /* function */ parent;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, readonly) NSArray *children;

- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 attributes:(id)a1;
- (void)appendChild:(id)a0;
- (void)appendChildren:(id)a0;
- (void)traverseWithDelegate:(id)a0;

@end
