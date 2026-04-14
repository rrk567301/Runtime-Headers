@class NSMapTable;

@interface PXRunNodeOperationMap : NSObject {
    NSMapTable *_operationMap;
}

- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)operationForRunNode:(id)a0;

@end
