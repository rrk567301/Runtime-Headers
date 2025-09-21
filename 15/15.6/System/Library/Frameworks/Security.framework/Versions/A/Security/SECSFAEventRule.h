@class NSString, SECSFAAction, NSData, SECSFAVersionMatch;

@interface SECSFAEventRule : PBCodable <NSCopying> {
    struct { unsigned char repeatAfterSeconds : 1; unsigned char eventClass : 1; unsigned char matchOnFirstFailure : 1; } _has;
}

@property (readonly, nonatomic) char hasEventType;
@property (retain, nonatomic) NSString *eventType;
@property (readonly, nonatomic) char hasMatch;
@property (retain, nonatomic) NSData *match;
@property (readonly, nonatomic) char hasAction;
@property (retain, nonatomic) SECSFAAction *action;
@property (nonatomic) char hasRepeatAfterSeconds;
@property (nonatomic) long long repeatAfterSeconds;
@property (readonly, nonatomic) char hasProcessName;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) char hasEventClass;
@property (nonatomic) int eventClass;
@property (readonly, nonatomic) char hasVersions;
@property (retain, nonatomic) SECSFAVersionMatch *versions;
@property (nonatomic) char hasMatchOnFirstFailure;
@property (nonatomic) char matchOnFirstFailure;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (int)StringAsEventClass:(id)a0;
- (id)eventClassAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
