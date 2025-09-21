@class NSMutableDictionary;

@interface CTBandInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *fActiveBands;
@property (retain, nonatomic) NSMutableDictionary *fSupportedBands;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)activeBands;
- (id)activeBandsForRat:(id)a0;
- (char)addActiveBand:(id)a0 forRat:(id)a1;
- (char)addActiveBands:(id)a0 forRat:(id)a1;
- (char)addSupportedBand:(id)a0 forRat:(id)a1;
- (char)addSupportedBands:(id)a0 forRat:(id)a1;
- (id)initWithActiveBands:(id)a0;
- (id)initWithSupported:(id)a0 andActiveBands:(id)a1;
- (id)initWithSupportedBands:(id)a0;
- (id)supportedBands;
- (id)supportedBandsForRat:(id)a0;

@end
