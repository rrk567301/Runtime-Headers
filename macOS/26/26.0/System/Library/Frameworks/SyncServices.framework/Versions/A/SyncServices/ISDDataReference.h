@class NSData, ISDDataWrapper;

@interface ISDDataReference : NSData {
    ISDDataWrapper *_dataWrapper;
    NSData *_data;
}

+ (id)dataReferenceWithData:(id)a0;
+ (id)dataReferenceWithDataWrapper:(id)a0;
+ (void)setCopyDataReferencesAsData:(BOOL)a0;

- (id)dataWrapper;
- (id)_data;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const void *)bytes;
- (id)description;
- (unsigned long long)length;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)dataFaultFailure;
- (id)initWithDataWrapper:(id)a0;
- (BOOL)isd_isAttributeSelfConsistent;
- (BOOL)isd_isEqual:(id)a0;

@end
