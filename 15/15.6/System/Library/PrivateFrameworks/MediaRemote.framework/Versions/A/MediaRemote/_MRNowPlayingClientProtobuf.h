@class NSString, _MRColorProtobuf, NSMutableArray;

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying> {
    struct { unsigned char nowPlayingVisibility : 1; unsigned char processIdentifier : 1; unsigned char processUserIdentifier : 1; unsigned char isEmptyDeprecated : 1; } _has;
}

@property (nonatomic) char hasProcessIdentifier;
@property (nonatomic) int processIdentifier;
@property (readonly, nonatomic) char hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) char hasParentApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *parentApplicationBundleIdentifier;
@property (nonatomic) char hasProcessUserIdentifier;
@property (nonatomic) int processUserIdentifier;
@property (nonatomic) char hasNowPlayingVisibility;
@property (nonatomic) int nowPlayingVisibility;
@property (readonly, nonatomic) char hasTintColor;
@property (retain, nonatomic) _MRColorProtobuf *tintColor;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *extendedBundleIdentifierHierarchys;
@property (nonatomic) char hasIsEmptyDeprecated;
@property (nonatomic) char isEmptyDeprecated;
@property (readonly, nonatomic) char hasIconURL;
@property (retain, nonatomic) NSString *iconURL;

+ (Class)extendedBundleIdentifierHierarchyType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsNowPlayingVisibility:(id)a0;
- (void)addExtendedBundleIdentifierHierarchy:(id)a0;
- (void)clearExtendedBundleIdentifierHierarchys;
- (id)extendedBundleIdentifierHierarchyAtIndex:(unsigned long long)a0;
- (unsigned long long)extendedBundleIdentifierHierarchysCount;
- (id)nowPlayingVisibilityAsString:(int)a0;

@end
