@class NSString;

@interface SCROBrailleUIMathString : NSObject {
    void /* unknown type, empty encoding */ content;
}

@property (nonatomic, readonly) NSString *latexRepresentation;
@property (nonatomic, readonly) NSString *mathMLRepresentation;
@property (nonatomic, readonly) NSString *calculateRepresentation;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNemeth:(id)a0;
- (id)initWithUEBMath:(id)a0;

@end
