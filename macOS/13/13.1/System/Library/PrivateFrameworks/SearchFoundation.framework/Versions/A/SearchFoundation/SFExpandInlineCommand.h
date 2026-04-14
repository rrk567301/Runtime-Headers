@class NSDictionary, NSData, NSString;

@interface SFExpandInlineCommand : SFCommand <SFExpandInlineCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char placeHolderProperty : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL placeHolderProperty;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
