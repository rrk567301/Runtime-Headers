@interface AVB17221AEMTimeSensitiveControlStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property BOOL moreThan4MessageTypes;
@property unsigned char messageType0;
@property BOOL messageType0Valid;
@property unsigned char messageType1;
@property BOOL messageType1Valid;
@property unsigned char messageType2;
@property BOOL messageType2Valid;
@property unsigned char messageType3;
@property BOOL messageType3Valid;

+ (id)keyPathsForValuesAffectingMoreThan4MessageTypes;
+ (id)keyPathsForValuesAffectingMessageType0;
+ (id)keyPathsForValuesAffectingMessageType0Valid;
+ (id)keyPathsForValuesAffectingMessageType1;
+ (id)keyPathsForValuesAffectingMessageType1Valid;
+ (id)keyPathsForValuesAffectingMessageType2;
+ (id)keyPathsForValuesAffectingMessageType2Valid;
+ (id)keyPathsForValuesAffectingMessageType3;
+ (id)keyPathsForValuesAffectingMessageType3Valid;

- (id)init;
- (BOOL)isControlFormat;
- (void)setMoreThan4MessageTypes:(BOOL)a0;
- (BOOL)moreThan4MessageTypes;
- (void)setMessageType0:(unsigned char)a0;
- (unsigned char)messageType0;
- (void)setMessageType0Valid:(BOOL)a0;
- (BOOL)messageType0Valid;
- (void)setMessageType1:(unsigned char)a0;
- (unsigned char)messageType1;
- (void)setMessageType1Valid:(BOOL)a0;
- (BOOL)messageType1Valid;
- (void)setMessageType2:(unsigned char)a0;
- (unsigned char)messageType2;
- (void)setMessageType2Valid:(BOOL)a0;
- (BOOL)messageType2Valid;
- (void)setMessageType3:(unsigned char)a0;
- (unsigned char)messageType3;
- (void)setMessageType3Valid:(BOOL)a0;
- (BOOL)messageType3Valid;

@end
