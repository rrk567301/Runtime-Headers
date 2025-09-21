@class NSString, NSArray, NSData, NSDate;

@interface BMUniversalRecentsMetadata : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *associatedBundleID;
@property (readonly, nonatomic) NSString *associatedURLString;
@property (readonly, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) NSArray *topics;
@property (readonly, nonatomic) BOOL hasAssociatedImageRepresentation;
@property (nonatomic) BOOL hasHasAssociatedImageRepresentation;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_topicsJSONArray;
- (id)initWithAbsoluteTimestamp:(id)a0 userActivityData:(id)a1 title:(id)a2 activityType:(id)a3 associatedBundleID:(id)a4 associatedURLString:(id)a5 modeIdentifier:(id)a6 topics:(id)a7 hasAssociatedImageRepresentation:(id)a8 uuid:(id)a9;

@end
