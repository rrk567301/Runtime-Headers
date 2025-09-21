@class NSString, NTPBDate;

@interface NTPBReadingHistoryItem : PBCodable <NSCopying> {
    struct { unsigned char listenedCount : 1; unsigned char listeningProgress : 1; unsigned char maxVersionRead : 1; unsigned char maxVersionSeen : 1; unsigned char readCount : 1; unsigned char flags : 1; } _has;
}

@property (readonly, nonatomic) char hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) char hasLastVisitedDate;
@property (retain, nonatomic) NTPBDate *lastVisitedDate;
@property (nonatomic) char hasFlags;
@property (nonatomic) unsigned int flags;
@property (nonatomic) char hasMaxVersionRead;
@property (nonatomic) long long maxVersionRead;
@property (readonly, nonatomic) char hasFirstSeenDate;
@property (retain, nonatomic) NTPBDate *firstSeenDate;
@property (readonly, nonatomic) char hasFirstSeenDateOfMaxVersionSeen;
@property (retain, nonatomic) NTPBDate *firstSeenDateOfMaxVersionSeen;
@property (nonatomic) char hasMaxVersionSeen;
@property (nonatomic) long long maxVersionSeen;
@property (readonly, nonatomic) char hasSourceChannelTagID;
@property (retain, nonatomic) NSString *sourceChannelTagID;
@property (readonly, nonatomic) char hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) char hasListeningProgress;
@property (nonatomic) double listeningProgress;
@property (readonly, nonatomic) char hasLastListened;
@property (retain, nonatomic) NTPBDate *lastListened;
@property (readonly, nonatomic) char hasReadingPosition;
@property (retain, nonatomic) NSString *readingPosition;
@property (nonatomic) char hasReadCount;
@property (nonatomic) long long readCount;
@property (readonly, nonatomic) char hasListeningProgressSavedDate;
@property (retain, nonatomic) NTPBDate *listeningProgressSavedDate;
@property (readonly, nonatomic) char hasReadingPositionSavedDate;
@property (retain, nonatomic) NTPBDate *readingPositionSavedDate;
@property (nonatomic) char hasListenedCount;
@property (nonatomic) long long listenedCount;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
