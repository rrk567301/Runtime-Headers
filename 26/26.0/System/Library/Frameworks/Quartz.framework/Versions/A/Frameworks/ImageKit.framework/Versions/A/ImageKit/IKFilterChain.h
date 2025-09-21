@class NSMutableArray;

@interface IKFilterChain : NSObject <NSCoding> {
    NSMutableArray *_filterConfigurationArray;
    BOOL _handleXRGB;
}

@property id delegate;
@property (retain) NSMutableArray *filterArray;
@property BOOL useSoftwareRenderer;

- (void)finalize;
- (void)cleanup;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)update;
- (id)initWithCoder:(id)a0;
- (void)removeCIFilter:(id)a0;
- (int)formatForImage:(struct CGImage { } *)a0;
- (void)addCIFilter:(id)a0;
- (BOOL)canApply;
- (struct CGImage { } *)createProcessedImage:(struct CGImage { } *)a0 context:(struct CGContext { } *)a1;
- (void)filter:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (id)filter:(id)a0 valueForKey:(id)a1;
- (id)filterForName:(id)a0 parameters:(id)a1;
- (id)filterForName:(id)a0 value:(id)a1 key:(id)a2;
- (id)getFilterFromFilterArray:(id)a0;
- (id)initWithFilterArray:(id)a0;
- (id)initWithOptions:(id)a0 createFilter:(BOOL)a1;
- (void)setupWithOptions:(id)a0 createFilter:(BOOL)a1;
- (void)updateCIFilter:(id)a0 parameters:(id)a1;
- (void)updateFilter:(id)a0 withParameters:(id)a1;

@end
