@interface AIMLISEventFilter : NSObject {
    void /* unknown type, empty encoding */ filter;
}

@property (class, nonatomic, readonly) AIMLISEventFilter *everything;

+ (id)allOf:(Class)a0;
+ (id)someOf:(Class)a0 types:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)combine:(id)a0;

@end
