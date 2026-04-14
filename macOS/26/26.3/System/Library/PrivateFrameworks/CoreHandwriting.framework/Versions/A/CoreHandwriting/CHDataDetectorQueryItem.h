@class NSSet, DDScannerResult;

@interface CHDataDetectorQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) DDScannerResult *dataDetectorResult;
@property (readonly, nonatomic) struct CGPath { } *estimatedBaseline;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToDataDetectorQueryItem:(id)a0;

@end
