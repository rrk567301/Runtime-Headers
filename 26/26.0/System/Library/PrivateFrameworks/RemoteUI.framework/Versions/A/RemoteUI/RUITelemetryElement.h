@class NSString, NSDictionary, NSURL, NSArray;

@interface RUITelemetryElement : NSObject {
    void /* unknown type, empty encoding */ xmlElement;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) RUITelemetryElement *parent;

- (id)init;
- (void).cxx_destruct;
- (id)initWithXMLElement:(id)a0 url:(id)a1;

@end
