@class NSData, ISDDataWrapper;

@interface ISDDataReference : NSData {
    ISDDataWrapper *_dataWrapper;
    NSData *_data;
}

+ (id)dataReferenceWithData:(id)a0;
+ (id)dataReferenceWithDataWrapper:(id)a0;
+ (void)setCopyDataReferencesAsData:(BOOL)a0;

- (const void *)bytes;
- (id)_data;
- (unsigned long long)length;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dataWrapper;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)dataFaultFailure;
- (id)initWithDataWrapper:(id)a0;
- (BOOL)isd_isAttributeSelfConsistent;
- (BOOL)isd_isEqual:(id)a0;

@end
