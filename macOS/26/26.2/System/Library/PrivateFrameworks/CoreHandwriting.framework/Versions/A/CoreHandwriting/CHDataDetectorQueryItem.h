@class NSSet, DDScannerResult;

@interface CHDataDetectorQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) DDScannerResult *dataDetectorResult;
@property (readonly, nonatomic) struct CGPath { } *estimatedBaseline;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (BOOL)isEqualToDataDetectorQueryItem:(id)a0;

@end
