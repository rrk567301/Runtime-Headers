@class NSString;

@interface NTPBTodayModuleContentRequest : PBRequest <NSCopying> {
    struct { unsigned char moduleDescriptorType : 1; } _has;
}

@property (nonatomic) char hasModuleDescriptorType;
@property (nonatomic) int moduleDescriptorType;
@property (readonly, nonatomic) char hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasNameColorLight;
@property (retain, nonatomic) NSString *nameColorLight;
@property (readonly, nonatomic) char hasNameColorDark;
@property (retain, nonatomic) NSString *nameColorDark;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
