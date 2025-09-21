@class RTIDocumentState, NSUUID, RTIDocumentTraits, RTITextOperations;

@interface RTIInputSystemDataPayload : RTIDataPayload <NSSecureCoding, NSCopying> {
    char _disableUpdate;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (retain, nonatomic) RTIDocumentState *documentState;
@property (retain, nonatomic) RTITextOperations *textOperations;
@property (retain, nonatomic) NSUUID *sessionUUID;

+ (id)payloadWithData:(id)a0;
+ (id)payloadWithData:(id)a0 version:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (id)initWithCoder:(id)a0;
- (void)_unarchiveData;
- (void)updateData;

@end
