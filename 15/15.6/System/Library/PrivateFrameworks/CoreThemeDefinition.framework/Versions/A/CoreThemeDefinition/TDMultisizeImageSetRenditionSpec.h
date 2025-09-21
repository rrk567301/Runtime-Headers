@class TDMultisizeImageSetProduction, NSSet;

@interface TDMultisizeImageSetRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDMultisizeImageSetProduction *multisizeImageSetProduction;
@property (retain, nonatomic) NSSet *multisizeImageRenditions;

- (char)canBePackedWithDocument:(id)a0;
- (id)createCSIRepresentationWithCompression:(char)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;

@end
