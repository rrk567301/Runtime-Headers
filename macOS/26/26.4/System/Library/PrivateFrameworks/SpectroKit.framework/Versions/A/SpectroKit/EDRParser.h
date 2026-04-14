@class NSArray, EDRDescriptor;

@interface EDRParser : NSObject

@property (retain, nonatomic) EDRDescriptor *descriptor;
@property (retain, nonatomic) NSArray *spectralArray;

- (void)validate;
- (void).cxx_destruct;
- (void)print;
- (id)init;
- (int)getLength;
- (int)parse:(id)a0 atOffset:(int)a1;
- (id)getAsSpectralGroup;

@end
