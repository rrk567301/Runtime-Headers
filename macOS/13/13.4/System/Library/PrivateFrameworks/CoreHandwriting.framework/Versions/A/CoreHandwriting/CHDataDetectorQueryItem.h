@class NSSet, DDScannerResult;

@interface CHDataDetectorQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) DDScannerResult *dataDetectorResult;
@property (readonly, nonatomic) const struct CGPath { } *estimatedBaseline;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDataDetectorQueryItem:(id)a0;
- (id)initWithStrokeIdentifiers:(id)a0 detectedResult:(id)a1 estimatedBaseline:(struct CGPath { } *)a2;

@end
