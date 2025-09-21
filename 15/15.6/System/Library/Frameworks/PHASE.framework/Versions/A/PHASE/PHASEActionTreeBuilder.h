@class NSMutableArray, NSMutableSet;

@interface PHASEActionTreeBuilder : NSObject {
    NSMutableArray *_rootNodes;
    NSMutableSet *_parameters;
    NSMutableSet *_mixNodes;
    unsigned int _nextNodeId;
}

+ (id)getParamArray:(id)a0 globalParamUIDs:(id)a1 outError:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (char)addParameter:(id)a0;
- (char)addRootNode:(id)a0;
- (char)checkNodeForValidChannelLayouts:(id)a0 assetRegistry:(id)a1 outError:(id *)a2;
- (id)createParseableDictionaryWithUID:(id)a0 rootNodes:(id)a1 globalParamUIDs:(id)a2 assetRegistry:(id)a3 outError:(id *)a4;
- (void)fillGeneratorNodeEntries:(id)a0 dictionary:(id)a1;
- (void)fillOutDirectivityFieldsWithParams:(id)a0 dictionary:(id)a1 isListener:(char)a2;
- (void)fillOutDistanceFieldsWithParams:(id)a0 dictionary:(id)a1;
- (id)generateNodeDictionary:(id)a0 outError:(id *)a1;
- (char)processNode:(id)a0 withArray:(id)a1 assetRegistry:(id)a2 outError:(id *)a3;

@end
