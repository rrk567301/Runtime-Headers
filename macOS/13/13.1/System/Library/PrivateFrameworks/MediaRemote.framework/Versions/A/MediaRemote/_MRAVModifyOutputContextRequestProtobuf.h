@class NSMutableArray;

@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char outputContextType : 1; } _has;
}

@property (nonatomic) BOOL hasOutputContextType;
@property (nonatomic) int outputContextType;
@property (retain, nonatomic) NSMutableArray *addingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *removingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *settingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *clusterAwareAddingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *clusterAwareRemovingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *clusterAwareSettingOutputDeviceUIDs;

+ (Class)addingOutputDeviceUIDType;
+ (Class)removingOutputDeviceUIDType;
+ (Class)settingOutputDeviceUIDType;
+ (Class)clusterAwareAddingOutputDeviceUIDType;
+ (Class)clusterAwareRemovingOutputDeviceUIDType;
+ (Class)clusterAwareSettingOutputDeviceUIDType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)outputContextTypeAsString:(int)a0;
- (int)StringAsOutputContextType:(id)a0;
- (void)clearAddingOutputDeviceUIDs;
- (void)addAddingOutputDeviceUID:(id)a0;
- (unsigned long long)addingOutputDeviceUIDsCount;
- (id)addingOutputDeviceUIDAtIndex:(unsigned long long)a0;
- (void)clearRemovingOutputDeviceUIDs;
- (void)addRemovingOutputDeviceUID:(id)a0;
- (unsigned long long)removingOutputDeviceUIDsCount;
- (id)removingOutputDeviceUIDAtIndex:(unsigned long long)a0;
- (void)clearSettingOutputDeviceUIDs;
- (void)addSettingOutputDeviceUID:(id)a0;
- (unsigned long long)settingOutputDeviceUIDsCount;
- (id)settingOutputDeviceUIDAtIndex:(unsigned long long)a0;
- (void)clearClusterAwareAddingOutputDeviceUIDs;
- (void)addClusterAwareAddingOutputDeviceUID:(id)a0;
- (unsigned long long)clusterAwareAddingOutputDeviceUIDsCount;
- (id)clusterAwareAddingOutputDeviceUIDAtIndex:(unsigned long long)a0;
- (void)clearClusterAwareRemovingOutputDeviceUIDs;
- (void)addClusterAwareRemovingOutputDeviceUID:(id)a0;
- (unsigned long long)clusterAwareRemovingOutputDeviceUIDsCount;
- (id)clusterAwareRemovingOutputDeviceUIDAtIndex:(unsigned long long)a0;
- (void)clearClusterAwareSettingOutputDeviceUIDs;
- (void)addClusterAwareSettingOutputDeviceUID:(id)a0;
- (unsigned long long)clusterAwareSettingOutputDeviceUIDsCount;
- (id)clusterAwareSettingOutputDeviceUIDAtIndex:(unsigned long long)a0;

@end
