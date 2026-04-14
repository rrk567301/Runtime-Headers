@class HDDataOriginProvenance, NSString;

@interface _HDDataProvenanceKey : NSObject <NSCopying> {
    unsigned long long _hash;
    HDDataOriginProvenance *_dataProvenance;
    NSString *_localProductType;
    NSString *_localSystemBuild;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
