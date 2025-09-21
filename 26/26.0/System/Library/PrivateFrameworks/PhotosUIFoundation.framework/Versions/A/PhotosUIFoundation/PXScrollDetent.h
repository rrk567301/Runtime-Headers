@class NSString;

@interface PXScrollDetent : NSObject {
    void /* function */ identifier;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) BOOL availableForScrollingGesture;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 offset:(double)a1 availableForScrollingGesture:(BOOL)a2;

@end
