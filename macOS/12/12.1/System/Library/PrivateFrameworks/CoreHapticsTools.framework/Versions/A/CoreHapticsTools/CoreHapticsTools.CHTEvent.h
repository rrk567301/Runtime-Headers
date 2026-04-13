@class NSString;

@interface CoreHapticsTools.CHTEvent : NSObject {
    void /* unknown type, empty encoding */ type;
}

@property (nonatomic, copy) NSString *type;
@property (nonatomic) void /* unknown type, empty encoding */ time;

- (id)init;
- (void).cxx_destruct;

@end
