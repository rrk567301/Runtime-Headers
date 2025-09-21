@class NSData, NSString, NSArray, ICPlayActivityEnqueuerProperties, NSDate, ICPlayActivityEventItemIDs, ICPlayActivityAudioQualityProperties, NSTimeZone, ICPlayActivityEventContainerIDs, NSNumber;

@interface ICPlayActivityEvent : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    long long _persistentID;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) unsigned long long autoPlayMode;
@property (readonly, copy, nonatomic) NSArray *buildFeatures;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic) ICPlayActivityEventContainerIDs *containerIDs;
@property (readonly, nonatomic) unsigned long long containerType;
@property (readonly, nonatomic, getter=isContinuityCameraUsed) char continuityCameraUsed;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) unsigned long long displayType;
@property (readonly, nonatomic) unsigned long long endReasonType;
@property (readonly, copy, nonatomic) ICPlayActivityEnqueuerProperties *enqueuerProperties;
@property (readonly, copy, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, copy, nonatomic) NSTimeZone *eventTimeZone;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSString *householdID;
@property (readonly, copy, nonatomic) ICPlayActivityEventItemIDs *itemIDs;
@property (readonly, nonatomic) double itemDuration;
@property (readonly, nonatomic) double itemEndTime;
@property (readonly, nonatomic) double itemStartTime;
@property (readonly, nonatomic) unsigned long long itemType;
@property (readonly, nonatomic) unsigned long long lyricsDisplayedCharacterCount;
@property (readonly, copy, nonatomic) NSString *lyricsLanguage;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic, getter=isOffline) char offline;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (readonly, copy, nonatomic) NSString *queueGroupingID;
@property (readonly, nonatomic) unsigned long long reasonHintType;
@property (readonly, copy, nonatomic) NSData *recommendationData;
@property (readonly, nonatomic) unsigned long long repeatPlayMode;
@property (readonly, copy, nonatomic) NSString *requestingBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *requestingBundleVersion;
@property (readonly, nonatomic, getter=isSBEnabled) char SBEnabled;
@property (readonly, nonatomic) unsigned long long shufflePlayMode;
@property (readonly, copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) unsigned long long storeAccountID;
@property (readonly, copy, nonatomic) NSString *storeFrontID;
@property (readonly, nonatomic) long long systemReleaseType;
@property (readonly, copy, nonatomic) NSData *timedMetadata;
@property (readonly, copy, nonatomic) NSData *trackInfo;
@property (readonly, nonatomic) unsigned long long audioQualityPreference;
@property (readonly, nonatomic) unsigned long long playbackFormatPreference;
@property (readonly, copy, nonatomic) ICPlayActivityAudioQualityProperties *targetedAudioQuality;
@property (readonly, copy, nonatomic) ICPlayActivityAudioQualityProperties *providedAudioQuality;
@property (readonly, nonatomic) unsigned long long sharedActivityGroupSizeCurrent;
@property (readonly, nonatomic) unsigned long long sharedActivityGroupSizeMax;
@property (readonly, nonatomic) long long sharedActivityType;
@property (readonly, nonatomic, getter=isCollaborativePlaylist) char collaborativePlaylist;
@property (nonatomic) unsigned long long vocalAttenuationAvailability;
@property (nonatomic) double vocalAttenuationDuration;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, nonatomic, getter=isInternalBuild) char internalBuild;
@property (readonly, copy, nonatomic) NSString *personalizedContainerID;
@property (readonly, copy, nonatomic) NSString *storeID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (char)isEqualToEvent:(id)a0;
- (Class)_mutableCopyClass;

@end
