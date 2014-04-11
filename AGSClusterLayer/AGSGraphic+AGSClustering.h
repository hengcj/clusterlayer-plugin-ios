//
//  AGSGraphic+AGSClustering.h
//  Cluster Layer
//
//  Created by Nicholas Furness on 3/28/14.
//  Copyright (c) 2014 ESRI. All rights reserved.
//

#import <ArcGIS/ArcGIS.h>

@interface AGSGraphic (AGSClustering)
@property (nonatomic, readonly) BOOL isCluster;
-(id)clusterItemKey;
@end
