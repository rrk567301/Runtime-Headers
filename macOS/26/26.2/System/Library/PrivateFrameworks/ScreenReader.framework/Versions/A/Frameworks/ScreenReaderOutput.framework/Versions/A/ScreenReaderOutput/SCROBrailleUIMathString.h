@class NSString;

@interface SCROBrailleUIMathString : NSObject {
    void /* unknown type, empty encoding */ content;
}

@property (nonatomic, readonly) NSString *latexRepresentation;
@property (nonatomic, readonly) NSString *mathMLRepresentation;
@property (nonatomic, readonly) NSString *calculateRepresentation;

- (void).cxx_destruct;
- (id)init;
- (id)initWithNemeth:(id)a0;
- (id)initWithUEBMath:(id)a0;

@end
