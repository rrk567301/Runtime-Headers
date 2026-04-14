@class NSDictionary;

@interface ICOutlineController : NSObject {
    void /* unknown type, empty encoding */ ancestorMap;
    void /* unknown type, empty encoding */ collapsedUUIDs;
}

@property (nonatomic, copy) NSDictionary *ancestorMap;
@property (nonatomic, retain) void /* unknown type, empty encoding */ textStorage;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (id)initWithTextStorage:(id)a0;
- (void)collapseUUIDs:(id)a0;
- (void)expandUUIDs:(id)a0;
- (BOOL)isUUIDCollapsed:(id)a0;
- (void)toggleUUIDCollapsed:(id)a0;

@end
