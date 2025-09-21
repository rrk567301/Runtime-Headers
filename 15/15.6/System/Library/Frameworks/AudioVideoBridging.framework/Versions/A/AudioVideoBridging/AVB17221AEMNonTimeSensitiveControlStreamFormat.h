@interface AVB17221AEMNonTimeSensitiveControlStreamFormat : AVB17221AEMATDECCStandardStreamFormat

@property char moreThan4MessageTypes;
@property unsigned char messageType0;
@property char messageType0Valid;
@property unsigned char messageType1;
@property char messageType1Valid;
@property unsigned char messageType2;
@property char messageType2Valid;
@property unsigned char messageType3;
@property char messageType3Valid;

+ (id)keyPathsForValuesAffectingMessageType0;
+ (id)keyPathsForValuesAffectingMessageType0Valid;
+ (id)keyPathsForValuesAffectingMessageType1;
+ (id)keyPathsForValuesAffectingMessageType1Valid;
+ (id)keyPathsForValuesAffectingMessageType2;
+ (id)keyPathsForValuesAffectingMessageType2Valid;
+ (id)keyPathsForValuesAffectingMessageType3;
+ (id)keyPathsForValuesAffectingMessageType3Valid;
+ (id)keyPathsForValuesAffectingMoreThan4MessageTypes;

- (id)init;
- (char)isControlFormat;
- (unsigned char)messageType0;
- (char)messageType0Valid;
- (unsigned char)messageType1;
- (char)messageType1Valid;
- (unsigned char)messageType2;
- (char)messageType2Valid;
- (unsigned char)messageType3;
- (char)messageType3Valid;
- (char)moreThan4MessageTypes;
- (void)setMessageType0:(unsigned char)a0;
- (void)setMessageType0Valid:(char)a0;
- (void)setMessageType1:(unsigned char)a0;
- (void)setMessageType1Valid:(char)a0;
- (void)setMessageType2:(unsigned char)a0;
- (void)setMessageType2Valid:(char)a0;
- (void)setMessageType3:(unsigned char)a0;
- (void)setMessageType3Valid:(char)a0;
- (void)setMoreThan4MessageTypes:(char)a0;

@end
