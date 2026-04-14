@class NSString;

@interface ISS__DAVXMLNSTag : NSObject {
    NSString *ns;
    NSString *tag;
}

- (void)dealloc;
- (void)finalize;
- (id)tag;
- (id)namespace;
- (id)initWithNS:(id)a0 andTag:(id)a1;

@end
