@class NSData, NSString;

@interface ATXPBProactiveSuggestionExecutableSpecification : PBCodable <NSCopying> {
    unsigned long long _executableObjectHash;
    NSData *_executable;
    NSString *_executableClassString;
    NSString *_executableDescription;
    NSString *_executableIdentifier;
    int _executableType;
    struct { unsigned char executableObjectHash : 1; unsigned char executableType : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
