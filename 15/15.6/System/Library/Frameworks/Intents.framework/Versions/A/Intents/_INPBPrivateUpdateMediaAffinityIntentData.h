@class _INPBPrivateMediaIntentData, NSArray, NSString, NSData;

@interface _INPBPrivateUpdateMediaAffinityIntentData : PBCodable <_INPBPrivateUpdateMediaAffinityIntentData, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *internalSignals;
@property (readonly, nonatomic) unsigned long long internalSignalsCount;
@property (copy, nonatomic) NSData *pegasusMetaData;
@property (readonly, nonatomic) char hasPegasusMetaData;
@property (retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData;
@property (readonly, nonatomic) char hasPrivateMediaIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addInternalSignal:(id)a0;
- (void)clearInternalSignals;
- (id)internalSignalAtIndex:(unsigned long long)a0;

@end
