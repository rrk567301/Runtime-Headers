@class NSSet;

@interface PGDejunkerDeduperFeature : NSObject <NSCopying>

@property (readonly) char hasPersons;
@property (readonly) char hasPeopleScenes;
@property (readonly) char isVideo;
@property (readonly) NSSet *personLocalIdentifiers;
@property (readonly) NSSet *peopleScenes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)identicalSimilarity;
- (id)initWithPersonLocalIdentifiers:(id)a0 peopleScenes:(id)a1 isVideo:(char)a2;

@end
