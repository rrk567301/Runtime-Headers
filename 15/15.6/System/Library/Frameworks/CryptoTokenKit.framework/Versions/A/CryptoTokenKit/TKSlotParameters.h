@class NSNumber, NSString;

@interface TKSlotParameters : NSObject

@property long long maxInputLength;
@property long long maxOutputLength;
@property (retain) NSNumber *productID;
@property (retain) NSNumber *vendorID;
@property (retain) NSString *firmwareVersion;
@property char securePINVerificationSupported;
@property char securePINChangeSupported;
@property (retain) NSNumber *displayMaxCharacters;
@property (retain) NSNumber *displayMaxLines;
@property (retain) NSNumber *pinValidationCondition;
@property double interactionTimeout;
@property (retain) NSNumber *minPINLength;
@property (retain) NSNumber *maxPINLength;
@property char delegateWithControlMethod;
@property char delegateWithEscapeMethod;

- (id)description;
- (void).cxx_destruct;
- (id)getDictionaryParameters;
- (id)initWithEntriesFromDictionary:(id)a0;
- (id)initWithMaxBlockSize:(long long)a0;

@end
