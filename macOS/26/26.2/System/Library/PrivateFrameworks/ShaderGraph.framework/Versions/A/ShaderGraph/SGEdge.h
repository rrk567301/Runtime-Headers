@class NSString;

@interface SGEdge : NSObject {
    void /* unknown type, empty encoding */ from;
    void /* unknown type, empty encoding */ to;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initFrom:(id)a0 to:(id)a1;

@end
